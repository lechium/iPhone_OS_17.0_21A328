//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (VNAdditions)
- (float)vn_decodeValidatedScoreForKey:(id)arg1;	// IMP=0x0090000000060c77
- (void)vn_encodeValidatedScore:(float)arg1 forKey:(id)arg2;	// IMP=0x0090000000060b1d
- (float)vn_decodeValidatedConfidenceForKey:(id)arg1;	// IMP=0x00900000000609c0
- (void)vn_encodeValidatedConfidence:(float)arg1 forKey:(id)arg2;	// IMP=0x0090000000060869
- (struct __CVBuffer *)vn_decodePixelBufferForKey:(id)arg1;	// IMP=0x009000000006078d
- (void)vn_encodePixelBuffer:(struct __CVBuffer *)arg1 forKey:(id)arg2;	// IMP=0x00900000000606f8
- (struct CGRect)vn_decodeRectForKey:(id)arg1;	// IMP=0x00900000000605ec
- (void)vn_encodeRect:(struct CGRect)arg1 forKey:(id)arg2;	// IMP=0x00900000000604b9
- (struct CGSize)vn_decodeSizeForKey:(id)arg1;	// IMP=0x00900000000603b6
- (void)vn_encodeSize:(struct CGSize)arg1 forKey:(id)arg2;	// IMP=0x00900000000602b2
- (struct CGPoint)vn_decodePointForKey:(id)arg1;	// IMP=0x00900000000601af
- (void)vn_encodePoint:(struct CGPoint)arg1 forKey:(id)arg2;	// IMP=0x00900000000600ab
- (CDStruct_5c5366e1)vn_decodeTimeRangeForKey:(id)arg1;	// IMP=0x009000000005ffb3
- (void)vn_encodeTimeRange:(CDStruct_5c5366e1)arg1 forKey:(id)arg2;	// IMP=0x009000000005ff14
- (MISSING_TYPE *)vn_decodeSimdFloat3ForKey:(id)arg1;	// IMP=0x009000000005fc46
- (void)vn_encodeSimdFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;	// IMP=0x009000000005fb91
- (CDStruct_14d5dc5e)vn_decode4x4MatrixForKey:(id)arg1;	// IMP=0x009000000005f92b
- (void)vn_encode4x4Matrix:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;	// IMP=0x009000000005f7d7
- (CDStruct_8e0628e6)vn_decode3x3MatrixForKey:(id)arg1;	// IMP=0x009000000005f501
- (void)vn_encode3x3Matrix:(CDStruct_8e0628e6)arg1 forKey:(id)arg2;	// IMP=0x009000000005f423
- (struct CGAffineTransform)vn_decodeCGAffineTransformForKey:(id)arg1;	// IMP=0x009000000005f193
- (void)vn_encodeCGAffineTransform:(struct CGAffineTransform)arg1 forKey:(id)arg2;	// IMP=0x009000000005f0dd
- (unsigned int)vn_decodeCodingVersionForKey:(id)arg1;	// IMP=0x009000000005f0cb
- (void)vn_encodeCodingVersion:(unsigned int)arg1 forKey:(id)arg2;	// IMP=0x009000000005f0b9
- (id)vn_decodeEntityUniqueIdentifierArrayForKey:(id)arg1;	// IMP=0x009000000029846d
- (id)vn_decodeEntityUniqueIdentifierForKey:(id)arg1;	// IMP=0x00900000002983ff
- (void)vn_encodeEntityUniqueIdentifierArray:(id)arg1 forKey:(id)arg2;	// IMP=0x00900000002983ed
- (void)vn_encodeEntityUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x00900000002983db
- (id)vn_decodePersonUniqueIdentifierForKey:(id)arg1;	// IMP=0x00900000002a543d
- (void)vn_encodePersonUniqueIdentifier:(id)arg1 forKey:(id)arg2;	// IMP=0x00900000002a542b
@end

