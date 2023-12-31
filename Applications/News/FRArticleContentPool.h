//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCCloudContext, MISSING_TYPE, NSCountedSet, NSMutableDictionary;
@protocol FRFlintDataProviderFactory;

@interface FRArticleContentPool : NSObject
{
    FCCloudContext *_context;	// 8 = 0x8
    id <FRFlintDataProviderFactory> _dataProviderFactory;	// 16 = 0x10
    NSMutableDictionary *_pool;	// 24 = 0x18
    unsigned long long _highWaterMark;	// 32 = 0x20
    NSCountedSet *_interests;	// 40 = 0x28
    NSMutableDictionary *_accessDates;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000044681
@property(retain, nonatomic) NSMutableDictionary *accessDates; // @synthesize accessDates=_accessDates;
@property(retain, nonatomic) NSCountedSet *interests; // @synthesize interests=_interests;
@property(nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
@property(readonly, nonatomic) id <FRFlintDataProviderFactory> dataProviderFactory; // @synthesize dataProviderFactory=_dataProviderFactory;
@property(readonly, nonatomic) FCCloudContext *context; // @synthesize context=_context;
- (void)_flushIfNeeded;	// IMP=0x001000000004413d
- (id)_createEntryForHeadline:(id)arg1;	// IMP=0x0010000000043fd1
- (void)_fetchEntryForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043c51
- (id)_entryForHeadline:(id)arg1;	// IMP=0x0010000000043ad3
- (void)flushContentWithArticleID:(id)arg1;	// IMP=0x0010000000043a56
- (void)fetchFlintDataProviderForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004396c
- (id)flintDataProviderForHeadline:(id)arg1;	// IMP=0x00100000000438cd
- (void)fetchContentForHeadline:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000437e3
- (MISSING_TYPE *)contentForHeadline: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004374c
- (void)removeInterestInArticleWithID:(id)arg1;	// IMP=0x0010000000043663
- (void)addInterestInArticleWithID:(id)arg1;	// IMP=0x001000000004350e
- (id)initWithCloudContext:(id)arg1 dataProviderFactory:(id)arg2;	// IMP=0x0010000000043429

@end

