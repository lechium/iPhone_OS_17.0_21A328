//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, OS_dispatch_queue, SDXPCHelperConnection;

@interface SDShareSheetAirDropController : NSObject
{
    MISSING_TYPE *browser;	// 8 = 0x8
    MISSING_TYPE *realName;	// 16 = 0x10
    MISSING_TYPE *currentTransferID;	// 0 = 0x0
    MISSING_TYPE *airDropClient;	// 0 = 0x0
    MISSING_TYPE *sessionID;	// 5944216 = 0x5ab398
    MISSING_TYPE *queue;	// 0 = 0x0
    MISSING_TYPE *helperConnection;	// 0 = 0x0
    MISSING_TYPE *transferUpdateChangedHandler;	// 0 = 0x0
    MISSING_TYPE *availableNodesChangedHandler;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *availableNodes;	// 1887007839 = 0x7079745f
}

- (void).cxx_destruct;	// IMP=0x0040000000479fe0
- (id)init;	// IMP=0x0010000000479fa0
- (void)cancelCurrentSend;	// IMP=0x0010000000479c80
- (void)send:(id)arg1 to:(id)arg2 itemPreviewData:(id)arg3 requestSource:(id)arg4;	// IMP=0x0010000000479200
- (void)invalidate;	// IMP=0x0010000000476f40
- (void)activateWithBundleID:(id)arg1;	// IMP=0x0010000000476bc0
- (id)initWithSessionID:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000475570
@property(nonatomic, copy) NSArray *availableNodes;
@property(nonatomic, copy) CDUnknownBlockType availableNodesChangedHandler;
@property(nonatomic, copy) CDUnknownBlockType transferUpdateChangedHandler;
@property(nonatomic) __weak SDXPCHelperConnection *helperConnection; // @synthesize helperConnection;
@property(nonatomic, readonly) OS_dispatch_queue *queue; // @synthesize queue;
@property(nonatomic, readonly) NSString *sessionID;

@end
