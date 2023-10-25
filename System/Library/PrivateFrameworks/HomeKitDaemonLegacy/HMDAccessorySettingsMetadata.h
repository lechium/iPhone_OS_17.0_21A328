//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessorySettingGroupMetadata, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsMetadata : HMFObject
{
    HMDAccessorySettingGroupMetadata *_rootGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000030497a
@property(readonly) HMDAccessorySettingGroupMetadata *rootGroup; // @synthesize rootGroup=_rootGroup;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithURL:(id)arg1;	// IMP=0x000000000030474a
- (id)init;	// IMP=0x0000000000304487

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end
