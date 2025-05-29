/**
 * exploring the real world use case of the Elastic search for the ECommerce System
 *  - Creating Index with Shards and nodes
 *  -  Index a single product document
 *  - Bulk index multiple products
 *  - Search for products by keyword, filter by price and category
 *  - Update a product document partially
 *  - Delete a product document
 *  - Client usage logic
 */

// Creating Index 

import client from "./client";

const createProductIndex = async () => {
    try {
        const {body: exists} = await client.indices.exists({index: "products"});
        if (exists) {
            console.log("Index 'products' already exists");
        }

        // Create the product index
        await client.indices.create({
            index: "products",
            body: {
                settings: {
                    number_of_shards : 3,
                    number_of_replica: 2
                },
                mappings: {
                    properties : {
                        product_id : {
                            type: 'keyword',
                        },
                        name: {
                            type: 'text',
                            analyzer: 'standard'
                        },
                        description: {
                            type: 'text',
                            analyzer: "standard"
                        },
                        price: {
                            type: 'double'
                        },
                        category: {
                            type: 'keyword',
                        },
                        in_stock : {
                            type: 'boolean'
                        },
                        ratings: {
                            type: 'float'
                        },
                        tags: {
                            type: 'keyword'
                        }
                    }
                }
            }
        })

        console.log("Created Index 'products' with 3 shards and 2 replicas");
    } catch (error) {
        console.error("Unable to create Product Index", error);
    }
};

