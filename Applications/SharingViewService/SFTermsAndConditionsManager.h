//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, RemoteUIController, UINavigationController, UIViewController;

@interface SFTermsAndConditionsManager : NSObject
{
    UINavigationController *_genericTermsUIViewController;	// 8 = 0x8
    UIViewController *_presenter;	// 16 = 0x10
    _Bool _showWarranty;	// 24 = 0x18
    _Bool _showingOfflineTerms;	// 25 = 0x19
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    CDUnknownBlockType _loadedHandler;	// 40 = 0x28
    RemoteUIController *_termsController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001a8d36
@property(retain, nonatomic) RemoteUIController *termsController; // @synthesize termsController=_termsController;
@property(copy, nonatomic) CDUnknownBlockType loadedHandler; // @synthesize loadedHandler=_loadedHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;	// IMP=0x00100000001a8a8e
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;	// IMP=0x00100000001a8776
- (void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2;	// IMP=0x00100000001a875d
- (void)dismissTerms:(_Bool)arg1;	// IMP=0x00100000001a86f7
- (void)handleAgreeButton;	// IMP=0x00100000001a86e0
- (MISSING_TYPE *)handleDisagreeButton;	// IMP=0x00100000001a86cc
- (void)loadOfflineTerms;	// IMP=0x00100000001a84f0
- (void)_termsDisagree;	// IMP=0x00100000001a84dc
- (void)_handleAgreeFromObjectModel:(id)arg1;	// IMP=0x00100000001a83d2
- (void)activate;	// IMP=0x00100000001a800b
- (id)initWithPresenter:(id)arg1 showWarranty:(_Bool)arg2;	// IMP=0x00100000001a7f94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

