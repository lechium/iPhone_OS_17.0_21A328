//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, RetrievingDialog, VettingHandler;

@interface VettingAcceptor : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    unsigned long long _backgroundTaskID;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    VettingHandler *_vettingHandler;	// 32 = 0x20
    RetrievingDialog *_retrievingDialog;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001900c
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) RetrievingDialog *retrievingDialog; // @synthesize retrievingDialog=_retrievingDialog;
@property(readonly, nonatomic) VettingHandler *vettingHandler; // @synthesize vettingHandler=_vettingHandler;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
- (void)dealloc;	// IMP=0x0010000000018f86
- (void)completeVettingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000186d1
- (void)retrievingDialogCancelled;	// IMP=0x001000000001867c
- (_Bool)retrievingDialogShouldDisplay;	// IMP=0x0010000000018674
- (id)initWithCloudKitURL:(id)arg1;	// IMP=0x00100000000185a2

@end

