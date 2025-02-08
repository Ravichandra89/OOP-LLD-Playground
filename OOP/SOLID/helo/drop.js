import mongoose from "mongoose";
import dotenv from "dotenv";

dotenv.config();

const MONGO_URI = process.env.DATABASE_URL;

if (!MONGO_URI) {
  console.error("❌ DATABASE_URL is not defined in .env");
  process.exit(1); // Exit the process if the URI is not defined
} else {
  console.log("✅ Connecting to MongoDB with URI:", MONGO_URI);
}

const dropIndex = async () => {
  try {
    // Connect to MongoDB using the URI from .env
    await mongoose.connect(MONGO_URI, {
      useNewUrlParser: true,
      useUnifiedTopology: true,
    });
    console.log("✅ Connected to MongoDB");

    const db = mongoose.connection.db;
    const collection = db.collection("users");

    // Drop the index on googleId
    await collection.dropIndex("googleId_1");
    console.log("✅ Dropped index googleId_1 successfully");

    // Disconnect from MongoDB
    await mongoose.disconnect();
    console.log("✅ Disconnected from MongoDB");
  } catch (error) {
    console.error("❌ Error dropping index:", error);
  }
};

dropIndex();
