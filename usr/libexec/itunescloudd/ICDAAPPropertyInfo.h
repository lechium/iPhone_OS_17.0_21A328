//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDAAPPropertyInfo : NSObject
{
    NSMutableDictionary *_codeMap;	// 8 = 0x8
    NSMutableDictionary *_valueTypeMap;	// 16 = 0x10
}

+ (id)sharedContainerPropertyInfo;	// IMP=0x00200000000c447c
+ (id)sharedItemPropertyInfo;	// IMP=0x00100000000c444c
- (void).cxx_destruct;	// IMP=0x00200000000c4424
@property(retain, nonatomic) NSMutableDictionary *valueTypeMap; // @synthesize valueTypeMap=_valueTypeMap;
@property(retain, nonatomic) NSMutableDictionary *codeMap; // @synthesize codeMap=_codeMap;
- (void)mapProperty:(id)arg1 toCode:(unsigned int)arg2 valueType:(long long)arg3;	// IMP=0x00100000000c432d
- (id)_init;	// IMP=0x00100000000c4290
- (long long)valueTypeForProperty:(id)arg1;	// IMP=0x00100000000c4248
- (unsigned int)elementCodeForProperty:(id)arg1;	// IMP=0x00100000000c4200
- (_Bool)hasInfoForProperty:(id)arg1;	// IMP=0x00100000000c41c9

@end

