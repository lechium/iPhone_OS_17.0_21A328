//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CallKit/CXProviderConfiguration.h>

@class NSArray, NSOrderedSet, NSSet;

@interface CXProviderConfiguration (CSD)
@property(readonly, copy, nonatomic) NSOrderedSet *prioritizedTUSenderIdentities;
@property(readonly, copy, nonatomic) NSArray *emergencyTULabeledHandles;
@property(readonly, copy, nonatomic) NSArray *emergencyTUHandles;
@property(readonly, copy, nonatomic) NSSet *supportedTUHandleTypes;
@end
