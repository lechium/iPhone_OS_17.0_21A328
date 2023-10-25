//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSString, UIViewController;

@interface HSPCFaceRecognitionPhotoLibraryAccessViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000056ef2
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)attributedSubtitle;	// IMP=0x0010000000056b4c
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;	// IMP=0x0010000000056b44
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;	// IMP=0x0010000000056b2b
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;	// IMP=0x0010000000056b12
- (id)commitConfiguration;	// IMP=0x0010000000056af2
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000056671

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
