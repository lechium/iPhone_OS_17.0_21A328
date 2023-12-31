//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPFetcherConfiguration, LPiTunesMediaLookupTask, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesCuratorProfileURLFetcher
{
    LPFetcherConfiguration *_configuration;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    NSString *_curatorID;	// 24 = 0x18
    LPiTunesMediaLookupTask *_lookupTask;	// 32 = 0x20
    _Bool _cancelled;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000063aca
@property(readonly, retain, nonatomic) NSString *curatorID; // @synthesize curatorID=_curatorID;
- (void)_completedWithResponse:(id)arg1;	// IMP=0x0000000000063a4a
- (void)_failedWithError:(id)arg1;	// IMP=0x00000000000639b8
- (void)cancel;	// IMP=0x000000000006398c
- (void)fetchWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000635ba
- (id)initWithCuratorID:(id)arg1;	// IMP=0x0000000000063525

@end

