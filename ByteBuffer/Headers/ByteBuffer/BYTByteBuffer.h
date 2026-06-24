//
//  BYTByteBuffer.h
//  ByteBuffer
//
//  Created by Masaki Ando on 2019/01/05.
//  Copyright (c) 2019 Hituzi Ando. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BYTByteBuffer : NSObject
/**
 * Returns this buffer's capacity.
 */
@property (nonatomic, readonly) NSUInteger capacity;
/**
 * This buffer's limit.
 *
 * @throw NSRangeException Raised if the new limit is greater than this buffer's capacity.
 */
@property (nonatomic) NSUInteger limit;
/**
 * This buffer's current position.
 *
 * @throw NSRangeException Raised if the new position is greater than the current limit.
 */
@property (nonatomic) NSUInteger position;
/**
 * Returns the current buffer.
 */
@property (nonatomic, readonly) NSData *buffer;
/**
 * Returns the number of elements between the current position and the limit.
 * (`remaining` = `limit` - `position`).
 */
@property (nonatomic, readonly) NSInteger remaining;
/**
 * Tells whether there are any elements between the current position and the limit.
 * Returns YES if `remaining` is greater than zero, otherwise NO.
 */
@property (nonatomic, readonly) BOOL hasRemaining;

/**
 * Creates the instance with given capacity.
 *
 * @param capacity The new buffer's capacity, in bytes.
 */
+ (instancetype)allocateWithCapacity:(NSUInteger)capacity;

/**
 * Puts the integer value.
 *
 * @param i An integer value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInteger:(NSInteger)i;
/**
 * Puts the unsigned integer value.
 *
 * @param i An unsigned integer value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInteger:(NSUInteger)i;
/**
 * Puts the short value.
 *
 * @param s A short value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putShort:(short)s;
/**
 * Puts the int8_t value.
 *
 * @param i An int8_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInt8:(int8_t)i;
/**
 * Puts the uint8_t value.
 *
 * @param i An uint8_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInt8:(uint8_t)i;
/**
 * Puts the int16_t value.
 *
 * @param i An int16_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInt16:(int16_t)i;
/**
 * Puts the uint16_t value.
 *
 * @param i An uint16_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInt16:(uint16_t)i;
/**
 * Puts the int32_t value.
 *
 * @param i An int32_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInt32:(int32_t)i;
/**
 * Puts the uint32_t value.
 *
 * @param i An uint32_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInt32:(uint32_t)i;
/**
 * Puts the int64_t value.
 *
 * @param i An int64_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInt64:(int64_t)i;
/**
 * Puts the uint64_t value.
 *
 * @param i An uint64_t value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInt64:(uint64_t)i;
/**
 * Puts the int value.
 *
 * @param i An int value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putInt:(int)i;
/**
 * Puts the unsigned int value.
 *
 * @param i An unsigned int value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putUInt:(unsigned int)i;
/**
 * Puts the long value.
 *
 * @param l A long value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putLong:(long)l;
/**
 * Puts the long long value.
 *
 * @param ll A long long value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putLongLong:(long long)ll;
/**
 * Puts the float value.
 *
 * @param f A float value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putFloat:(float)f;
/**
 * Puts the double value.
 *
 * @param d A double value.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the value.
 */
- (instancetype)putDouble:(double)d;
/**
 * Puts the string. It is encoded with UTF-8 and put to this buffer.
 *
 * @param string A string.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the UTF-8 encoded bytes.
 */
- (instancetype)putUTF8String:(NSString *)string;
/**
 * Puts the data.
 *
 * @param data A data.
 * @return Self.
 * @throw NSRangeException Raised if there is insufficient space remaining in the buffer to write the data.
 */
- (instancetype)putData:(NSData *)data;
/**
 * Gets the integer value.
 *
 * @return An integer value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (NSInteger)getInteger;
/**
 * Gets the unsigned integer value.
 *
 * @return An unsigned integer value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (NSUInteger)getUInteger;
/**
 * Gets the short value.
 *
 * @return A short value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (short)getShort;
/**
 * Gets the int8_t value.
 *
 * @return An int8_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (int8_t)getInt8;
/**
 * Gets the uint8_t value.
 *
 * @return An uint8_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (uint8_t)getUInt8;
/**
 * Gets the int16_t value.
 *
 * @return An int16_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (int16_t)getInt16;
/**
 * Gets the uint16_t value.
 *
 * @return An uint16_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (uint16_t)getUInt16;
/**
 * Gets the int32_t value.
 *
 * @return An int32_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (int32_t)getInt32;
/**
 * Gets the uint32_t value.
 *
 * @return An uint32_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (uint32_t)getUInt32;
/**
 * Gets the int64_t value.
 *
 * @return An int64_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (int64_t)getInt64;
/**
 * Gets the uint64_t value.
 *
 * @return An uint64_t value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (uint64_t)getUInt64;
/**
 * Gets the int value.
 *
 * @return An int value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (int)getInt;
/**
 * Gets the unsigned int value.
 *
 * @return An unsigned int value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (unsigned int)getUInt;
/**
 * Gets the long value.
 *
 * @return A long value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (long)getLong;
/**
 * Gets the long long value.
 *
 * @return A long long value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (long long)getLongLong;
/**
 * Gets the float value.
 *
 * @return A float value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (float)getFloat;
/**
 * Gets the double value.
 *
 * @return A double value.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (double)getDouble;
/**
 * Gets one byte data.
 *
 * @return One byte data.
 * @throw NSRangeException Raised if the current position has reached the limit and there are no remaining bytes to read.
 */
- (NSData *)getData;
/**
 * Flips this buffer.
 * Sets the current position to the limit and resets the position (= 0).
 *
 * @return Self.
 */
- (instancetype)flip;
/**
 * Rewinds this buffer.
 * Resets the position (= 0).
 *
 * @return Self.
 */
- (instancetype)rewind;
/**
 * Clears this buffer.
 * Resets the position (= 0) and sets the capacity to the limit.
 *
 * @return Self.
 */
- (instancetype)clear;
/**
 * Compacts this buffer.
 *
 * @return Self.
 */
- (instancetype)compact;

@end

NS_ASSUME_NONNULL_END
