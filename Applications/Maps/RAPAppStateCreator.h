//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSceneDelegate;

@interface RAPAppStateCreator : NSObject
{
    MapsSceneDelegate *_sceneDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000043b95d
- (void)createPlacecardImageryReportAProblemAppStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043b869
- (void)_saveDirectionRecordingsIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043b54f
- (void)createCuratedCollectionReportAProblemAppStateWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043b422
- (id)createReportAProblemAppState;	// IMP=0x001000000043b30a
- (void)createReportAProblemAppStateAndPrefetchShortcutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043b026
- (void)createLookAroundReportAProblemAppStateWithLookAroundContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000043ae92
- (void)createReportAProblemAppStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000043abb4
- (id)initWithSceneDelegate:(id)arg1;	// IMP=0x001000000043ab50

@end
