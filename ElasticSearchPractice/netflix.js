import client from "./client.js";

const createIndex = async () => {
    await client.indices.create({
        index: "movies",
        mappings: {
            properties: {
                title : {
                    type: "text",
                },
                year: {
                    type: "integer",
                },
                genre: {
                    type: "keyword",
                },
                actors: {
                    type: "text",
                },
                ratings: {
                    type: "float"
                }
            }
        }
    }, {ignore : [400]});
};

const indexDocuments = async () => {
    try {
        // put the document in the index

        await client.index({
            index: "movies",
            body: {
                title: "The Shawshank Redemption",
                year: 2000,
                genre: "Drama",
                actors: "Tim Robbins, Morgan Freeman",
                ratings: 9.3
            }
        });

        await client.indices.refresh({
            index: "movies"
        })
    } catch (error) {
        console.error("Error indexing documents:", error);
    }
};

const searchMovie = async (title) => {
    try {
        // Write a query to search for the movie
        const response = await client.search({
            index: "movies",
            body: {
                query: {
                    match: {
                        title,
                    }
                }
            }
        });

        if (!response.hits.hits.length) {
            console.log("No movies found");
        } 

        console.log("search Results: ", response.hits.hits);
    } catch (error) {
        console.error("Error searching for movie:", error);      
    }
};

await createIndex();
await indexDocuments();

/**
 * Searching for movie based on title
 * The search will be case insensitive
 */
await searchMovie("The Shawshank Redemption");
