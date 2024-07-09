# Option-Pricing-Model
The Option Pricing Model project provides a robust and flexible toolkit for option pricing using three different models. Each model has its unique advantages and use cases, making this project valuable for financial analysis and quantitative trading strategies. The structured and modular implementation ensures ease of extension and maintenance.

## Overview
This project implements various option pricing models, including the Binomial Model, Monte Carlo Simulation, and the Black-Scholes Model. It's designed to provide financial analysts and enthusiasts with tools to calculate the fair value of options under different market conditions.

# Introduction
The Advanced Option Pricing Models project is a comprehensive suite designed for financial analysts, quantitative researchers, and enthusiasts in the field of finance. It aims to provide a robust set of tools for evaluating and predicting the fair market value of financial options. This project encapsulates the implementation of three pivotal models in option pricing theory: the Binomial Model, Monte Carlo Simulation, and the Black-Scholes Model. Each model offers a unique approach to option valuation, catering to various market conditions and assumptions.

## Project Features

### Binomial Model
The Binomial Model is a versatile tool for calculating the price of options using a discrete-time framework. It models the underlying asset's price evolution as a binomial tree, allowing for the assessment of American-style options where early exercise may be optimal.

### Monte Carlo Simulation
Our Monte Carlo Simulation feature employs statistical sampling techniques to estimate the potential future payoff of options. This method is particularly useful for pricing complex derivatives and exotic options, where analytical solutions may not exist.

### Black-Scholes Model
The Black-Scholes Model is a cornerstone of modern financial theory, providing a formula for valuing European options by assuming a lognormal distribution for stock prices. This model serves as a benchmark for option pricing in continuous-time financial markets.

## Installation Guide

### System Requirements
- A GCC compiler capable of supporting C++11 or later.
- GNU Make for automating the build process.

### Setting Up the Environment
To get started with the Advanced Option Pricing Models project, clone the repository to your local machine using the following command:
Clone the repository to your local machine:

git clone 
cd Option-Pricing-Model
git 
cd Advanced-Option-Pricing-Models   

 ## Compilation Instructions
Compile the project by executing the make command in the root directory of the project:
 make

## Running the Application
Navigate to the bin directory and execute the OptionPricingModel binary to launch the application:
 
 cd bin
./OptionPricingModel


