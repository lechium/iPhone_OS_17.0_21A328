//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSHandleQRDialogResult : NSObject
{
}

+ (_Bool)_isDismissQRDialogEnabled;	// IMP=0x00800000002c7a4b
+ (id)_dismissalIdentifierFromDialogResult:(id)arg1;	// IMP=0x00800000002c7829
+ (void)_removeQRDialogDismissalObserverForIdentifier:(id)arg1;	// IMP=0x00800000002c75ce
+ (void)_observeQRDialogDismissalNotificationForIdentifier:(id)arg1 dialog:(id)arg2;	// IMP=0x00800000002c72d6
+ (void)handleQRDialogPresentationForRequest:(id)arg1 result:(id)arg2 logKey:(id)arg3;	// IMP=0x00800000002c6dc2

@end

