//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol ServiceAlertDelegate;

@interface ServiceAlertController : NSObject
{
    NSMutableArray *_alertViews;	// 8 = 0x8
    id <ServiceAlertDelegate> _delegate;	// 16 = 0x10
    id _remoteViewControllerProxy;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000014a27
@property(nonatomic) __weak id <ServiceAlertDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_disconnectFromAlertView:(id)arg1;	// IMP=0x0010000000014901
- (void)alertViewCancel:(id)arg1;	// IMP=0x0010000000014891
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;	// IMP=0x001000000001476a
- (void)presentAlertForDialog:(id)arg1;	// IMP=0x0010000000014386
- (void)dealloc;	// IMP=0x001000000001422e
- (id)initWithRemoteViewControllerProxy:(id)arg1;	// IMP=0x00100000000141c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
