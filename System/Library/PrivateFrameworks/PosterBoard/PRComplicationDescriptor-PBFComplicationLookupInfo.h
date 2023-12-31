//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterKit/PRComplicationDescriptor.h>

@class ATXComplication, INIntent, NSNumber, NSString;

@interface PRComplicationDescriptor (PBFComplicationLookupInfo)
@property(readonly, copy, nonatomic) INIntent *complicationIntent;
@property(readonly, copy, nonatomic) NSString *complicationWidgetKind;
@property(readonly, copy, nonatomic) NSString *complicationContainingBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *complicationExtensionBundleIdentifier;
@property(readonly, copy, nonatomic) NSNumber *complicationWidgetFamily;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) ATXComplication *suggestedComplication;
@property(readonly) Class superclass;
@end

