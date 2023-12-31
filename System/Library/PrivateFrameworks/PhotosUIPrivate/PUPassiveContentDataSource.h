//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSPointerArray, NSString, PHFetchResult;

__attribute__((visibility("hidden")))
@interface PUPassiveContentDataSource : NSObject
{
    NSString *_title;	// 8 = 0x8
    PHFetchResult *_fetchResult;	// 16 = 0x10
    NSPointerArray *_delegates;	// 24 = 0x18
    NSMutableArray *_contextDataSources;	// 32 = 0x20
}

+ (id)ambientDataSource;	// IMP=0x00100000005798b3
+ (id)wallpaperDataSource;	// IMP=0x0010000000579670
+ (id)wallpaperSubtypeTitleFromSubtype:(unsigned short)arg1;	// IMP=0x0010000000579563
- (void).cxx_destruct;	// IMP=0x0000000000578ef1
@property(retain, nonatomic) NSMutableArray *contextDataSources; // @synthesize contextDataSources=_contextDataSources;
@property(readonly, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000000578cac
- (id)indexPathForSuggestionUUID:(id)arg1;	// IMP=0x0000000000578b74
- (unsigned long long)sectionCount;	// IMP=0x0000000000578b5e
- (unsigned long long)count;	// IMP=0x0000000000578b1a
- (unsigned long long)countInSection:(unsigned long long)arg1;	// IMP=0x0000000000578a86
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x0000000000578a01
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x000000000057891c
- (void)_setupContextDataSourcesIfNeeded;	// IMP=0x000000000057837a
- (id)initWithFetchResult:(id)arg1;	// IMP=0x00000000005782d0
- (id)initWithSuggestionSubtype:(unsigned short)arg1;	// IMP=0x0000000000577fca
- (id)initForSettlingEffect;	// IMP=0x0000000000577edb
- (id)initForAmbientFeatured;	// IMP=0x00000000005779b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

