//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTBulkDataService, GTServiceProperties, NSObject;
@protocol GTMTLReplayService, GTURLAccessProvider, OS_os_log;

@interface GTMTLReplayServiceXPCDispatcher
{
    id <GTMTLReplayService> _implInstance;	// 8 = 0x8
    id <GTURLAccessProvider> _URLAccessService;	// 16 = 0x10
    GTBulkDataService *_bulkDataService;	// 24 = 0x18
    GTServiceProperties *_bulkDataServiceProperties;	// 32 = 0x20
    NSObject<OS_os_log> *_log;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000019e34
- (void)resume_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000019d80
- (void)pause_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000019ccc
- (void)cancel_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000019c18
- (void)raytrace_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000019830
- (void)shaderdebug_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000195df
- (void)profile_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000192ab
- (void)display_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000019235
- (void)decode_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000191d5
- (void)update_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018c1b
- (void)query_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018bbb
- (void)fetch_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000001889e
- (void)terminateProcess:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018881
- (void)load_error_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018639
- (void)deregisterObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x001000000001859a
- (void)registerObserver_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x00100000000184c5
- (void)bulkDataService:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018452
- (void)broadcastDisconnect:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0010000000018353
- (id)initWithService:(id)arg1 properties:(id)arg2 bulkDataService:(id)arg3 bulkDataServiceProperties:(id)arg4 URLAccesService:(id)arg5;	// IMP=0x00100000000181b8

@end

