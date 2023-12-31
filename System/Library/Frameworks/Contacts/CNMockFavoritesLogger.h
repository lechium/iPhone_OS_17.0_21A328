//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockFavoritesLogger : NSObject
{
}

- (void)reportFavoritesAccessedBeforeFirstUnlock;	// IMP=0x00000000000bb96b
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x00000000000bb965
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;	// IMP=0x00000000000bb95f
- (void)failedToWriteRemoteFavorites:(id)arg1;	// IMP=0x00000000000bb959
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;	// IMP=0x00000000000bb953
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;	// IMP=0x00000000000bb94d
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;	// IMP=0x00000000000bb947
- (void)failedToReadRemoteFavorites:(id)arg1;	// IMP=0x00000000000bb941
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x00000000000bb93b
- (void)finishedWritingRemoteFavorites;	// IMP=0x00000000000bb935
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;	// IMP=0x00000000000bb92f
- (void)finishedReadingRemoteFavorites;	// IMP=0x00000000000bb929
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb90e
- (void)writingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb8f3
- (void)readingFavorites:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bb8d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

