//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TCCDSyncController, TCCDSyncRequestAccessAction;
@protocol OS_dispatch_semaphore;

@interface TCCDSyncSession : NSObject
{
    _Bool _didSendMessage;	// 8 = 0x8
    TCCDSyncController *_syncController;	// 16 = 0x10
    TCCDSyncRequestAccessAction *_syncRequestAccessAction;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_sentMessageSemaphore;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000bd6b
@property(retain) NSObject<OS_dispatch_semaphore> *sentMessageSemaphore; // @synthesize sentMessageSemaphore=_sentMessageSemaphore;
@property _Bool didSendMessage; // @synthesize didSendMessage=_didSendMessage;
// Error: Property attributes should begin with the type ('T') attribute, property name: syncRequestAccessAction
// Property attributes: (null)

@property __weak TCCDSyncController *syncController; // @synthesize syncController=_syncController;
- (unsigned long long)performRequestAccessAction:(id)arg1;	// IMP=0x001000000000b77e
- (id)initWithSyncController:(id)arg1;	// IMP=0x001000000000b71a

@end
