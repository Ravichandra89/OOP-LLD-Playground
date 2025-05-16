import client from "./client";

/*
const createIndex = async (indexName) => {
  try {
    await client.indices.create({
      index: "users",
      body: {
        mappings: {
          properties: {
            name: {
              type: "text",
            },
            age: {
              type: "integer",
            },
            email: {
              type: "keyword",
            },
          },
        },
      },
    }, {ignore : [400]}); 

    // Put Documents in the Index
    await client.index({
        index: "users",
        body: {
            name: "Ravi Chandra",
            age: 25,
            email : "ravi@gmail.com"
        }
    });

    // Search for Documents in Index
    const result = await client.search({
        index: "user",
        query: {
            match: {
                name : "Ravi Chandra"
            }
        }
    });

    if (!result.hits.hits.length) {
        console.log("No documents found");
    }
  } catch (error) {
    console.error("Error creating index:", error);
  }
};

*/

// Creating Index with Sharding and Replication

const createIndex = async (indexName) => {
  try {
    // Creating an index with 3 shards and 1 replica
    await client.indices.create(
      {
        index: indexName,
        body: {
          settings: {
            number_of_shards: 3,
            number_of_replicas: 1,
          },
          mappings: {
            properties: {
              name: { type: "text" },
              age: { type: "integer" },
              email: { type: "keyword" },
            },
          },
        },
      },
      { ignore: [400] }
    ); // Ignore 400 error if index already exists

    // put documents in the index
    await client.index({
      index: indexName,
      body: {
        name: "Ravi Chandra",
        age: 25,
        email: "ravi@gmail.com",
      },
    });

    await client.indices.refresh({ index: indexName });

    const result = await client.search({
      index: indexName,
      query: {
        match: {
          name: "Ravi Chandra",
        },
      },
    });

    if (!result.hits.hits.length) {
      console.log("No documents found");
    } else {
      console.log("Documents found:", result.hits.hits);
    }
  } catch (error) {
    console.error("Error creating index:", error);
  }
};

// Multiple Document Inside the user index
const createMultipleDocuments = async (indexName) => {
  try {
    // Check if index already exists
    const indexExists = await client.indices.exists({
      index: indexName,
    });

    if (indexExists) {
      console.log(`Index ${indexName} already exists`);
      return;
    }

    // Create the index with 3 shards and 1 replica
    await client.index(
      {
        index: indexName,
        body: {
          settings: {
            number_of_shards: 3,
            number_of_replicas: 1,
          },
          mappings: {
            properties: {
              name: {
                type: "text",
              },
              age: {
                type: "integer",
              },
              email: {
                type: "keyword",
              },
            },
          },
        },
      },
      { ignore: [400] }
    ); // If index already exists gives 400 error code

    // Putting multiple documents in the index
    const documents = [
      { name: "ravi", age: 23, email: "ravi@gmail.com" },
      { name: "khyati", age: 30, email: "khyati@gmail.com" },
      { name: "sachin", age: 35, email: "sachine@gmail.com" },
      { name: "rishabh", age: 28, email: "rish@gmail.com" },
      { name: "rahul", age: 29, email: "rahul@gmail.com" },
    ];

    const bulkOps = documents.flatMap((doc) => [
      { index: { _index: indexName } },
      doc,
    ]);

    const bulkResponse = await client.bulk({ refresh: true, body: bulkOps });

    if (bulkResponse.errors) {
      console.error("Bulk operation errors:", bulkResponse.errors);
    } else {
      console.log("Documents indexed successfully");
    }

    // Searching for documents
    const result = await client.search({
      index: indexName,
      query: {
        match: {
          name: "khyati",
        },
      },
    });

    if (!result.hits.hits.length) {
      console.log("No documents found!");
    } else {
      console.log("Documents found: ", result.hits.hits);
    }

    // Updating a document in the index
  } catch (error) {
    console.error("Error creating index:", error);
  }
};

const updateDocument = async (indexName, payload) => {
  try {
    return this.client.update({
      index: indexName,
      type: "_doc",
      id: payload.id,
      body: payload,
    });
  } catch (error) {
    console.error("Error updating document:", error);
  }
};

const deleteDocument = async (indexName, id) => {
  try {
    const deleteResponse = await client.delete({
      index: indexName,
      id,
    });

    if (deleteResponse.result === "deleted") {
        console.log(`Document with ID ${id} deleted successfully`);
    } 
    console.log("Document not found / Deleted");
  } catch (error) {
    console.error("Error deleting document:", error);
  }
};

createIndex("users");
createMultipleDocuments("users");
