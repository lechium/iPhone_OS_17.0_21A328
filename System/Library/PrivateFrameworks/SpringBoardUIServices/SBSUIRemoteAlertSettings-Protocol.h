//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString, SBSRemoteAlertActivationContext, SBSRemoteAlertConfigurationContext;

@protocol SBSUIRemoteAlertSettings <NSObject>
@property(copy) SBSRemoteAlertActivationContext *activationContext;
@property(retain) SBSRemoteAlertConfigurationContext *configurationContext;
@property(copy) NSString *configurationIdentifier;
@property struct CGRect windowedAccessoryCutoutFrameInScreen;
@property(getter=isAttachedToWindowedAccessory) _Bool attachedToWindowedAccessory;
@end

