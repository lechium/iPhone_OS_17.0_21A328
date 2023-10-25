//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SOSAccount;

@interface SOSMessage : NSObject
{
    void *engine;	// 8 = 0x8
    SOSAccount *account;	// 16 = 0x10
    NSString *circleName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002593c5
@property(retain) NSString *circleName; // @synthesize circleName;
@property(retain) SOSAccount *account; // @synthesize account;
@property void *engine; // @synthesize engine;
- (_Bool)SOSTransportMessageSendMessageIfNeeded:(id)arg1 circleName:(struct __CFString *)arg2 pID:(struct __CFString *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000002591ea
- (void)SOSTransportMessageUpdateLastMessageSentTimetstamp:(id)arg1 peer:(struct __OpaqueSOSPeer *)arg2;	// IMP=0x00100000002590eb
- (_Bool)SOSTransportMessageHandlePeerMessage:(id)arg1 id:(struct __CFString *)arg2 cm:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x0010000000258e39
- (void)SOSTransportMessageUpdateRTTs:(id)arg1;	// IMP=0x0010000000258b48
- (void)SOSTransportMessageCalculateNextTimer:(id)arg1 rtt:(int)arg2 peerid:(id)arg3;	// IMP=0x0010000000258962
- (struct __CFDictionary *)SOSTransportMessageHandlePeerMessageReturnsHandledCopy:(id)arg1 peerMessages:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x001000000025893e
- (_Bool)SOSTransportMessageSendMessage:(id)arg1 id:(struct __CFString *)arg2 messageToSend:(struct __CFData *)arg3 err:(struct __CFError **)arg4;	// IMP=0x00100000002588b5
- (_Bool)SOSTransportMessageCleanupAfterPeerMessages:(id)arg1 peers:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002588ad
- (_Bool)SOSTransportMessageSyncWithPeers:(id)arg1 p:(struct __CFSet *)arg2 err:(struct __CFError **)arg3;	// IMP=0x00100000002588a5
- (_Bool)SOSTransportMessageFlushChanges:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x001000000025889d
- (_Bool)SOSTransportMessageSendMessages:(id)arg1 pm:(struct __CFDictionary *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0010000000258895
- (id)SOSTransportMessageGetAccount;	// IMP=0x0010000000258887
- (long long)SOSTransportMessageGetTransportType;	// IMP=0x001000000025887f
- (struct __CFString *)SOSTransportMessageGetCircleName;	// IMP=0x0010000000258875
- (void *)SOSTransportMessageGetEngine;	// IMP=0x001000000025886b
- (id)initWithAccount:(id)arg1 andName:(id)arg2;	// IMP=0x0010000000258775

@end
