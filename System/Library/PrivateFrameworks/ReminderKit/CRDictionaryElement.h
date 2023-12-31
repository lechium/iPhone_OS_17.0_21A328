//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRVectorTimestamp;
@protocol CRDataType;

__attribute__((visibility("hidden")))
@interface CRDictionaryElement : NSObject
{
    id <CRDataType> _value;	// 8 = 0x8
    CRVectorTimestamp *_timestamp;	// 16 = 0x10
}

+ (id)temporaryElementWithValue:(id)arg1;	// IMP=0x00600000000fda64
- (void).cxx_destruct;	// IMP=0x00000000000fdfff
@property(retain, nonatomic) CRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <CRDataType> value; // @synthesize value=_value;
- (id)description;	// IMP=0x00000000000fde95
- (void)mergeWith:(id)arg1;	// IMP=0x00000000000fdd66
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fdc80
- (unsigned long long)hash;	// IMP=0x00000000000fdc28
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;	// IMP=0x00000000000fdb71
- (id)initWithValue:(id)arg1;	// IMP=0x00000000000fdac4

@end

