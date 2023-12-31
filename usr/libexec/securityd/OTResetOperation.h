//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CuttlefishXPCWrapper, NSOperation, NSString, OTOperationDependencies;
@protocol OctagonStateString;

@interface OTResetOperation
{
    _Bool _notifyIdMS;	// 10 = 0xa
    NSString<OctagonStateString> *_intendedState;	// 16 = 0x10
    NSString<OctagonStateString> *_nextState;	// 24 = 0x18
    long long _resetReason;	// 32 = 0x20
    NSString *_idmsTargetContext;	// 40 = 0x28
    NSString *_idmsCuttlefishPassword;	// 48 = 0x30
    NSString *_containerName;	// 56 = 0x38
    NSString *_contextID;	// 64 = 0x40
    CuttlefishXPCWrapper *_cuttlefishXPCWrapper;	// 72 = 0x48
    OTOperationDependencies *_deps;	// 80 = 0x50
    NSOperation *_finishedOp;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000021b216
@property(retain) NSOperation *finishedOp; // @synthesize finishedOp=_finishedOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) CuttlefishXPCWrapper *cuttlefishXPCWrapper; // @synthesize cuttlefishXPCWrapper=_cuttlefishXPCWrapper;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property _Bool notifyIdMS; // @synthesize notifyIdMS=_notifyIdMS;
@property(retain) NSString *idmsCuttlefishPassword; // @synthesize idmsCuttlefishPassword=_idmsCuttlefishPassword;
@property(retain) NSString *idmsTargetContext; // @synthesize idmsTargetContext=_idmsTargetContext;
@property long long resetReason; // @synthesize resetReason=_resetReason;
@property(retain) NSString<OctagonStateString> *nextState; // @synthesize nextState=_nextState;
@property(readonly) NSString<OctagonStateString> *intendedState; // @synthesize intendedState=_intendedState;
- (void)groupStart;	// IMP=0x001000000021ae23
- (id)init:(id)arg1 contextID:(id)arg2 reason:(long long)arg3 idmsTargetContext:(id)arg4 idmsCuttlefishPassword:(id)arg5 notifyIdMS:(_Bool)arg6 intendedState:(id)arg7 dependencies:(id)arg8 errorState:(id)arg9 cuttlefishXPCWrapper:(id)arg10;	// IMP=0x001000000021ac68

@end

