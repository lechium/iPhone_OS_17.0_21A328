//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface SHLLibraryItemMetadata : NSObject
{
    NSData *_encodedSystemData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000002798e
@property(readonly, nonatomic) NSData *encodedSystemData; // @synthesize encodedSystemData=_encodedSystemData;
- (_Bool)validEncodedSystemData:(id)arg1;	// IMP=0x0010000000027968
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000027930
- (id)initWithMetadata:(id)arg1;	// IMP=0x001000000002788f
- (id)initWithEncodedSystemData:(id)arg1;	// IMP=0x00100000000277d0

@end

