//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDBannerCenter, MRRouteBannerRequest, NSMutableArray, NSString;

@interface MRDMediaActivityManager : NSObject
{
    MRRouteBannerRequest *_activeRequest;	// 8 = 0x8
    MRRouteBannerRequest *_activePillRequest;	// 16 = 0x10
    MRDBannerCenter *_bannerCenter;	// 24 = 0x18
    MRDBannerCenter *_pillCenter;	// 32 = 0x20
    unsigned long long _activePillBannerState;	// 40 = 0x28
    unsigned long long _activeBannerState;	// 48 = 0x30
    NSMutableArray *_pendingRequests;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    CDUnknownBlockType _pillCompletion;	// 72 = 0x48
}

+ (id)manager;	// IMP=0x0020000000140618
- (void).cxx_destruct;	// IMP=0x0020000000142284
@property(copy, nonatomic) CDUnknownBlockType pillCompletion; // @synthesize pillCompletion=_pillCompletion;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSMutableArray *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long activeBannerState; // @synthesize activeBannerState=_activeBannerState;
@property(nonatomic) unsigned long long activePillBannerState; // @synthesize activePillBannerState=_activePillBannerState;
@property(retain, nonatomic) MRDBannerCenter *pillCenter; // @synthesize pillCenter=_pillCenter;
@property(retain, nonatomic) MRDBannerCenter *bannerCenter; // @synthesize bannerCenter=_bannerCenter;
- (void)presentControlCenterCallToAction;	// IMP=0x00100000001421e4
- (void)bannerWithRequestIdentifier:(id)arg1 didReceiveEvent:(unsigned long long)arg2;	// IMP=0x00100000001416fa
- (id);	// IMP=0x0010000000141449
- (void)dismissAllBannerRequests;	// IMP=0x00100000001413ca
- (void)dismissPillBannerRequest:(id)arg1;	// IMP=0x001000000014133a
- (void)dismissBannerRequest:(id)arg1;	// IMP=0x00100000001412aa
- (void)dismissConnectedBanner;	// IMP=0x00100000001411db
@property(readonly, nonatomic, getter=isPresentingConnectedPill) _Bool presentingConnectedPill;
@property(readonly, nonatomic, getter=isPresentingBanner) _Bool presentingBanner;
- (void)postConnectedBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 remoteControl:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000140f35
- (void)dequeueNextPendingRequest;	// IMP=0x0010000000140dfa
- (void)enqueueRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000140d08
- (void)postAutoRouteBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000140b7c
- (void)postOneTapSuggestionBannerRequestForRoute:(id)arg1 devices:(id)arg2 endpoint:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000140a05
- (void)postBannerRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000014095d
- (void)postPillBannerRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001408b5
@property(retain, nonatomic) MRRouteBannerRequest *activePillRequest; // @synthesize activePillRequest=_activePillRequest;
@property(retain, nonatomic) MRRouteBannerRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
- (id)init;	// IMP=0x001000000014069d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

