//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNSmartPropertyFetcher : NSObject
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d72d6
- (id)_cn_ignorableKeys;	// IMP=0x00000000000d735d
- (id)_cn_optionalKeys;	// IMP=0x00000000000d7344
- (id)_cn_requiredKeys;	// IMP=0x00000000000d732b
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7325
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d7313
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d72e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d72de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

