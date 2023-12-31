//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, NSString, OTOperationDependencies;
@protocol OctagonFlagString, OctagonStateString;

@interface OTUpdateTrustedDeviceListOperation
{
    _Bool _logForUpgrade;	// 10 = 0xa
    NSString<OctagonStateString> *_nextState;	// 16 = 0x10
    NSString<OctagonStateString> *_intendedState;	// 24 = 0x18
    OTOperationDependencies *_deps;	// 32 = 0x20
    NSString<OctagonStateString> *_stateIfListUpdates;	// 40 = 0x28
    NSString<OctagonStateString> *_stateIfAuthenticationError;	// 48 = 0x30
    NSString<OctagonFlagString> *_retryFlag;	// 56 = 0x38
    NSOperation *_finishedOp;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000086abf
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) NSString<OctagonFlagString> *retryFlag; // @synthesize retryFlag=_retryFlag;
@property(retain) NSString<OctagonStateString> *stateIfAuthenticationError; // @synthesize stateIfAuthenticationError=_stateIfAuthenticationError;
@property(retain) NSString<OctagonStateString> *stateIfListUpdates; // @synthesize stateIfListUpdates=_stateIfListUpdates;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property _Bool logForUpgrade; // @synthesize logForUpgrade=_logForUpgrade;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
- (void)afterAuthKitFetch:(id)arg1 accountIsDemo:(_Bool)arg2 version:(id)arg3;	// IMP=0x0010000000086787
- (void)groupStart;	// IMP=0x00100000000862b7
- (id)initWithDependencies:(id)arg1 intendedState:(id)arg2 listUpdatesState:(id)arg3 authenticationErrorState:(id)arg4 errorState:(id)arg5 retryFlag:(id)arg6;	// IMP=0x001000000008616f

@end

