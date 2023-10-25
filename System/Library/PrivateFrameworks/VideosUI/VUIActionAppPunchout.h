//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSURL, VUIAppContext;

__attribute__((visibility("hidden")))
@interface VUIActionAppPunchout
{
    _Bool _isSensitiveURL;	// 8 = 0x8
    NSURL *_punchoutURL;	// 16 = 0x10
    VUIAppContext *_appContext;	// 24 = 0x18
    NSDictionary *_metrics;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001e289b
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) __weak VUIAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, nonatomic) _Bool isSensitiveURL; // @synthesize isSensitiveURL=_isSensitiveURL;
@property(readonly, nonatomic) NSURL *punchoutURL; // @synthesize punchoutURL=_punchoutURL;
- (void)_openPunchoutURL:(id)arg1;	// IMP=0x00000000001e23f5
- (id)_addMusicAppMetricsToUrl:(id)arg1;	// IMP=0x00000000001e223c
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e20bd
- (id)initWithContextData:(id)arg1 appContext:(id)arg2;	// IMP=0x00000000001e1f60

@end
