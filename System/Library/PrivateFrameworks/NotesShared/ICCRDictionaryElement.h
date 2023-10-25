//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCRVectorTimestamp;
@protocol ICCRDataType;

__attribute__((visibility("hidden")))
@interface ICCRDictionaryElement : NSObject
{
    id <ICCRDataType> _value;	// 8 = 0x8
    ICCRVectorTimestamp *_timestamp;	// 16 = 0x10
}

+ (id)temporaryElementWithValue:(id)arg1;	// IMP=0x0060000000105d32
- (void).cxx_destruct;	// IMP=0x00000000001062cd
@property(retain, nonatomic) ICCRVectorTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) id <ICCRDataType> value; // @synthesize value=_value;
- (id)description;	// IMP=0x0000000000106163
- (void)mergeWith:(id)arg1;	// IMP=0x0000000000106034
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000105f4e
- (unsigned long long)hash;	// IMP=0x0000000000105ef6
- (id)initWithValue:(id)arg1 timestamp:(id)arg2;	// IMP=0x0000000000105e3f
- (id)initWithValue:(id)arg1;	// IMP=0x0000000000105d92

@end
