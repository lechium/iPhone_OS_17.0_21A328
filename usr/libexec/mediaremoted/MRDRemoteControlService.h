//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAirPlayRemoteControlService, MRDBonjourRemoteControlService, MRDGroupSessionRemoteControlService, MRDIDSCompanionRemoteControlService, MRDIDSRemoteControlService, MRDRapportRemoteControlService, NSString;
@protocol MRDRemoteControlServiceDelegate, OS_dispatch_queue;

@interface MRDRemoteControlService : NSObject
{
    _Bool _started;	// 8 = 0x8
    MRDAirPlayRemoteControlService *_airPlayService;	// 16 = 0x10
    id <MRDRemoteControlServiceDelegate> _delegate;	// 24 = 0x18
    MRDBonjourRemoteControlService *_genericNetworkService;	// 32 = 0x20
    MRDBonjourRemoteControlService *_televisionNetworkService;	// 40 = 0x28
    MRDRapportRemoteControlService *_rapportService;	// 48 = 0x30
    MRDIDSCompanionRemoteControlService *_companionService;	// 56 = 0x38
    MRDIDSRemoteControlService *_idsService;	// 64 = 0x40
    MRDGroupSessionRemoteControlService *_groupSessionService;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workerQueue;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000edc79
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) MRDGroupSessionRemoteControlService *groupSessionService; // @synthesize groupSessionService=_groupSessionService;
@property(retain, nonatomic) MRDIDSRemoteControlService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) MRDIDSCompanionRemoteControlService *companionService; // @synthesize companionService=_companionService;
@property(retain, nonatomic) MRDRapportRemoteControlService *rapportService; // @synthesize rapportService=_rapportService;
@property(retain, nonatomic) MRDBonjourRemoteControlService *televisionNetworkService; // @synthesize televisionNetworkService=_televisionNetworkService;
@property(retain, nonatomic) MRDBonjourRemoteControlService *genericNetworkService; // @synthesize genericNetworkService=_genericNetworkService;
@property(nonatomic) __weak id <MRDRemoteControlServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MRDAirPlayRemoteControlService *airPlayService; // @synthesize airPlayService=_airPlayService;
- (id)_notifyDelegateWithConnection:(id)arg1;	// IMP=0x00100000000ed9a4
- (void)stop;	// IMP=0x00100000000ed93e
- (void)start;	// IMP=0x00100000000ed8d7
- (void)groupSessionRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed8b9
- (id)idsRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed8a4
- (id)idsCompanionRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed88f
- (void)rapportRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed871
- (void)airPlayRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed853
- (void)bonjourRemoteControlService:(id)arg1 didAcceptConnection:(id)arg2;	// IMP=0x00100000000ed835
@property(readonly, copy) NSString *debugDescription;
- (void)_initializeIDSRemoteControlServiceWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000ed20a
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000000ecef2

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

