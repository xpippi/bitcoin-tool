#ifndef BITCOIN_INCLUDE_RESULT_H
#define BITCOIN_INCLUDE_RESULT_H

/** @file result.h
 *  @brief Definitions of different return values from Bitcoin functions.
 *
 *  @author Matthew Anger
 */

/** All possible return values for bitcoin functions */
typedef enum BitcoinResult {
	BITCOIN_SUCCESS
	,BITCOIN_ERROR_PRIVATE_KEY_INVALID_FORMAT
	,BITCOIN_ERROR_PUBLIC_KEY_INVALID_FORMAT
	,BITCOIN_ERROR_OUTPUT_BUFFER_TOO_SMALL
	,BITCOIN_ERROR_CHECKSUM_FAILURE
} BitcoinResult;

/** @brief Return the text message corresponding to a BitcoinResult.
 *
 *  @param[in] result BitcoinResult returned from a previous function.
 *
 *  @return Pointer to text message.
 */
const char *Bitcoin_ResultString(BitcoinResult result);

#endif