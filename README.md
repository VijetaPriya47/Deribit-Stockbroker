# Deribit-Stockbroker
A C++ utility to measure order placement latency for API-based trading systems. This tool uses high-precision timing with std::chrono and the cURL library to send order requests and calculate the time taken to receive a response. Ideal for performance benchmarking in algorithmic trading.

# Trading System with Latency Measurement  

This project is a C++ trading system that interacts with the Deribit API. It supports various trading operations like placing buy/sell orders, canceling or editing orders, retrieving the order book, and viewing user positions. The system also measures **Order Placement Latency** for performance evaluation.  

---

## Features  

- **Order Placement**: Place buy or sell orders with specified parameters.  
- **Order Management**: Edit or cancel existing orders.  
- **Order Book Retrieval**: Fetch the order book for a specific instrument.  
- **User Positions**: Retrieve detailed position information.  
- **Ticker Data**: Get the latest market ticker information.  
- **Latency Measurement**: Measure and log the latency for placing orders.  

---

## Getting Started  

### Prerequisites  
1. Install **C++17** or later.  
2. Install the following libraries:  
   - `libcurl` for HTTP requests:  
     ```bash
     sudo apt-get install libcurl4-openssl-dev
     ```  
   - [nlohmann/json](https://github.com/nlohmann/json) for JSON parsing.  
   - `jsoncpp` for JSON handling.  

---

### Build Instructions  
1. Clone the repository:  
   ```bash
   git clone <repository_url>
   cd <repository_directory>
   ```
2. Compile and run the source code:

```bash
./compile-ans-run.sh
```

### Usage
1. Authentication:
   - Enter your Client ID and Client Secret when prompted.
     
2. Commands:

   -`place`: Place a buy or sell order.
   -`cancel`: Cancel an order by its ID.
   -`orderbook`: View the order book for a specific instrument.
   -`edit`: Edit an existing order's price or quantity.
   -`getPosition`: Retrieve position details for an instrument.
   -`getPositions`: Retrieve all positions for a currency and type (e.g., futures).
   -`ticker`: Fetch the ticker data for an instrument.
   -`exit`: Shut down the program.

3. Log File:

    -All activities and errors are logged in the `program.log` file.
  
### Key Functionality
**Latency Measurement:**

For every order placement, the latency is calculated and logged in milliseconds.
**Background Token Refresh:**

Automatically refreshes the API access token every 900 seconds to ensure continuous operation.

### Troubleshooting
**Authentication Errors:**

Verify the Client ID and Client Secret.
Check API permissions on Deribit.
**Dependencies Missing:**

Ensure libcurl and jsoncpp are installed and linked during compilation.
**Latency Logs:**

Verify that program.log exists and is writable.
