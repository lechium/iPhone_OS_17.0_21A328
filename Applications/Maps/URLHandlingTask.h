//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString, NSURL, UISceneOpenURLOptions;

@interface URLHandlingTask
{
    _Bool _launchedFromTTL;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSURL *_referringURL;	// 24 = 0x18
    UISceneOpenURLOptions *_sceneOptions;	// 32 = 0x20
    NSDictionary *_mkOptions;	// 40 = 0x28
    NSDate *_ttlEventTime;	// 48 = 0x30
    NSString *_sourceApplication;	// 56 = 0x38
    struct CGSize _windowSize;	// 64 = 0x40
}

+ (id)taskForURL:(id)arg1 referringURL:(id)arg2 sourceApplication:(id)arg3 sceneOptions:(id)arg4 mkOptions:(id)arg5 windowSize:(struct CGSize)arg6;	// IMP=0x0040000000473d94
- (void).cxx_destruct;	// IMP=0x00200000004749c5
@property(retain, nonatomic) NSString *sourceApplication; // @synthesize sourceApplication=_sourceApplication;
@property(nonatomic) struct CGSize windowSize; // @synthesize windowSize=_windowSize;
@property(retain, nonatomic) NSDate *ttlEventTime; // @synthesize ttlEventTime=_ttlEventTime;
@property(nonatomic) _Bool launchedFromTTL; // @synthesize launchedFromTTL=_launchedFromTTL;
@property(retain, nonatomic) NSDictionary *mkOptions; // @synthesize mkOptions=_mkOptions;
@property(retain, nonatomic) UISceneOpenURLOptions *sceneOptions; // @synthesize sceneOptions=_sceneOptions;
@property(retain, nonatomic) NSURL *referringURL; // @synthesize referringURL=_referringURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)taskFailed;	// IMP=0x0010000000474867
- (void)taskFinished:(id)arg1;	// IMP=0x0010000000474826
- (id)urlScheme;	// IMP=0x0010000000474728
- (void)_sendAnalytics;	// IMP=0x0010000000474722
- (void)_populateSessionAnalytics;	// IMP=0x0010000000474539
- (id)initWithURL:(id)arg1 referringURL:(id)arg2 sourceApplication:(id)arg3 sceneOptions:(id)arg4 mkOptions:(id)arg5;	// IMP=0x0010000000474403

@end

