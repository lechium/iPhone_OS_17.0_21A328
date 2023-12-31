//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDDaemonInterfaceFactory.h>

@class EDFetchController;

@interface DaemonInterfaceFactory : EDDaemonInterfaceFactory
{
    EDFetchController *_sharedFetchController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000012f6c
- (id)newOutgoingMessageRepository;	// IMP=0x0010000000012e56
- (id)newFetchController;	// IMP=0x0010000000012e40
- (id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2 sharedFetchController:(id)arg3;	// IMP=0x0010000000012daa

@end

