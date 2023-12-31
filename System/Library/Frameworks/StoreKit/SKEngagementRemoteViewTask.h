//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSString, SKRemoteEngagementPresenterViewController, UIViewController, UIWindowScene;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKEngagementRemoteViewTask : NSObject
{
    NSString *_clientBundleID;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_dispatchGroup;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    SKRemoteEngagementPresenterViewController *_remoteViewController;	// 40 = 0x28
    NSData *_requestData;	// 48 = 0x30
    NSData *_resultData;	// 56 = 0x38
    NSDictionary *_result;	// 64 = 0x40
    UIViewController *_viewController;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    UIWindowScene *_scene;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000002f7e7
@property(retain, nonatomic) UIWindowScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSDictionary *result; // @synthesize result=_result;
@property(retain, nonatomic) NSData *resultData; // @synthesize resultData=_resultData;
@property(retain, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) SKRemoteEngagementPresenterViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *clientBundleID; // @synthesize clientBundleID=_clientBundleID;
- (void)_presentViewController:(id)arg1;	// IMP=0x000000000002f4ae
- (void)_unblock;	// IMP=0x000000000002f43b
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;	// IMP=0x000000000002f367
- (void)engagementTaskDidFinishWithResult:(id)arg1 resultData:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002f1a5
- (void)presentEngagement;	// IMP=0x000000000002eca2
- (id)initWithRequestData:(id)arg1 presentingViewController:(id)arg2 windowScene:(id)arg3;	// IMP=0x000000000002ebb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

