//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

@class INUIVoiceShortcutHostContext, NSString;
@protocol INUIVoiceShortcutRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController
{
    id <INUIVoiceShortcutRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
    INUIVoiceShortcutHostContext *_serviceContext;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
}

+ (id)serviceViewControllerInterface;	// IMP=0x001000000000352d
+ (id)exportedInterface;	// IMP=0x0010000000003514
+ (void)getViewControllerCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000031df
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000312c
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002e3c
+ (id)_voiceShortcutUIExtension;	// IMP=0x0010000000002e0c
+ (void)initialize;	// IMP=0x0010000000002de4
- (void).cxx_destruct;	// IMP=0x0000000000002db5
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) INUIVoiceShortcutHostContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(nonatomic) __weak id <INUIVoiceShortcutRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteViewControllerDidCancel;	// IMP=0x0000000000002d07
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;	// IMP=0x0000000000002c8f
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;	// IMP=0x0000000000002bff
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;	// IMP=0x0000000000002b6f
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000002a6b
- (id)remoteViewControllerProxy;	// IMP=0x00000000000029d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

