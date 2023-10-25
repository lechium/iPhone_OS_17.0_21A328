//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSTimer;

__attribute__((visibility("hidden")))
@interface CNFRegAccountWebViewController
{
    _Bool _failedBagLoad;	// 56 = 0x38
    _Bool _listeningForBagLoad;	// 57 = 0x39
    NSTimer *_bagLoadTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000049ded
@property(nonatomic) _Bool failedBagLoad; // @synthesize failedBagLoad=_failedBagLoad;
- (id)authTokenHeaderValue;	// IMP=0x0000000000049dc5
- (id)authIdHeaderValue;	// IMP=0x0000000000049dbd
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x0000000000049da8
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x0000000000049d96
- (void)cancelTapped;	// IMP=0x0000000000049d81
- (id)bagKey;	// IMP=0x0000000000049d69
- (id)clientInfoHeaderValue;	// IMP=0x0000000000049a6f
- (id)interfaceLayoutHeaderValue;	// IMP=0x0000000000049995
- (id)serviceHeaderValue;	// IMP=0x0000000000049941
- (id)pushTokenHeaderValue;	// IMP=0x000000000004988e
- (id)securityHeaderValue;	// IMP=0x000000000004984d
- (id)viewPortHeaderValue;	// IMP=0x00000000000497a0
- (id)_viewPortForNormalPresentation;	// IMP=0x00000000000495e2
- (id)_viewPortForFormSheetPresentation;	// IMP=0x00000000000495ba
- (id)_nonModalParentController;	// IMP=0x0000000000049555
- (id)_viewPortStringForSize:(struct CGSize)arg1;	// IMP=0x00000000000494fb
- (void)_showGenericErrorWithHandler;	// IMP=0x0000000000049259
- (void)_stopListeningForBagLoad;	// IMP=0x00000000000490f3
- (void)_startListeningForBagLoad;	// IMP=0x0000000000048f86
- (void)_handleFTServerBagFinishedLoading;	// IMP=0x0000000000048e6d
- (void)_stopBagLoadTimer;	// IMP=0x0000000000048e2b
- (void)_startBagLoadTimer;	// IMP=0x0000000000048dc8
- (void)_bagLoadTimeout:(id)arg1;	// IMP=0x0000000000048ca8
- (void)_showURLDidNotLoadAlert;	// IMP=0x0000000000048946
- (_Bool)_loadURLFromBag;	// IMP=0x00000000000486ec
- (void)_reloadDelayed;	// IMP=0x00000000000486a6
- (void)_stopCurrentReload;	// IMP=0x0000000000048680
- (void)_reload;	// IMP=0x0000000000048649
- (_Bool)canSendURLRequest:(id)arg1;	// IMP=0x0000000000048055
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x0000000000047ea0
- (_Bool)shouldSetHeadersForRequest:(id)arg1;	// IMP=0x0000000000047e63
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x0000000000047e51
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000047e10
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000047dbb
- (id)logName;	// IMP=0x0000000000047dae
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x0000000000047da1
- (void)viewDidLoad;	// IMP=0x0000000000047c0f
- (void)loadView;	// IMP=0x000000000004785a
- (void)dealloc;	// IMP=0x00000000000477b9
- (id)initWithRegController:(id)arg1;	// IMP=0x000000000004749a

@end
