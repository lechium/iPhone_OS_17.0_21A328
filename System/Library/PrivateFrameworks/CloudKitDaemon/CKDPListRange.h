//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable
{
    CKDPListPosition *_left;	// 8 = 0x8
    CKDPListPosition *_right;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000288d31
@property(retain, nonatomic) CKDPListPosition *right; // @synthesize right=_right;
@property(retain, nonatomic) CKDPListPosition *left; // @synthesize left=_left;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000288c58
- (unsigned long long)hash;	// IMP=0x0000000000288c0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000288b53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000288ab5
- (void)copyTo:(id)arg1;	// IMP=0x0000000000288a52
- (void)writeTo:(id)arg1;	// IMP=0x00000000002889f5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002889e8
- (id)dictionaryRepresentation;	// IMP=0x000000000028875e
- (id)description;	// IMP=0x00000000002886af
@property(readonly, nonatomic) _Bool hasRight;
@property(readonly, nonatomic) _Bool hasLeft;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x00000000001ccebc

@end

