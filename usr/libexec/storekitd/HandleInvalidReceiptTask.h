//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _TtC9storekitd6Client;

@interface HandleInvalidReceiptTask
{
    int _pid;	// 8 = 0x8
    _TtC9storekitd6Client *_client;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009fd0f
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(readonly, nonatomic) _TtC9storekitd6Client *client; // @synthesize client=_client;
- (void)_presentSystemDialogWithTitle:(id)arg1 dialogMessage:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000009f98c
- (id)productURLForAppWithID:(id)arg1;	// IMP=0x001000000009f922
- (void)terminateClientApplication;	// IMP=0x001000000009f6ce
- (id)dialogRequestWithTitle:(id)arg1 dialogMessage:(id)arg2;	// IMP=0x001000000009f54b
- (void)main;	// IMP=0x001000000009f031
- (id)initWithClient:(id)arg1 pid:(int)arg2;	// IMP=0x001000000009efb2

@end

