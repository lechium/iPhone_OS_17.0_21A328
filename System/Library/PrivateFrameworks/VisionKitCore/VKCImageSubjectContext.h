//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSNumber, UIImage, VKCImageSubjectContextInstance, VKCRemoveBackgroundRequest, VKCRemoveBackgroundResult;

__attribute__((visibility("hidden")))
@interface VKCImageSubjectContext : NSObject
{
    unsigned long long _subjectCount;	// 8 = 0x8
    UIImage *_customImageForRemoveBackground;	// 16 = 0x10
    NSIndexSet *_activeSubjectIndexes;	// 24 = 0x18
    NSIndexSet *_activeMADSubjectIndexes;	// 32 = 0x20
    NSArray *_subjectPaths;	// 40 = 0x28
    VKCImageSubjectContextInstance *_allSubjectsInstance;	// 48 = 0x30
    NSArray *_subjectInstances;	// 56 = 0x38
    VKCRemoveBackgroundResult *_maskResult;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000014a52
@property(retain, nonatomic) VKCRemoveBackgroundResult *maskResult; // @synthesize maskResult=_maskResult;
@property(retain, nonatomic) NSArray *subjectInstances; // @synthesize subjectInstances=_subjectInstances;
@property(retain, nonatomic) VKCImageSubjectContextInstance *allSubjectsInstance; // @synthesize allSubjectsInstance=_allSubjectsInstance;
@property(retain, nonatomic) NSArray *subjectPaths; // @synthesize subjectPaths=_subjectPaths;
@property(retain, nonatomic) NSIndexSet *activeMADSubjectIndexes; // @synthesize activeMADSubjectIndexes=_activeMADSubjectIndexes;
@property(retain, nonatomic) NSIndexSet *activeSubjectIndexes; // @synthesize activeSubjectIndexes=_activeSubjectIndexes;
@property(retain, nonatomic) UIImage *customImageForRemoveBackground; // @synthesize customImageForRemoveBackground=_customImageForRemoveBackground;
@property(nonatomic) unsigned long long subjectCount; // @synthesize subjectCount=_subjectCount;
- (_Bool)subjectIndexes:(id)arg1 equivalentToIndexes:(id)arg2;	// IMP=0x000000000001490c
- (id)indexOfSubjectAtNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x0000000000014688
- (_Bool)containsSubjectAtNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x0000000000014655
- (id)normalizedPathForActiveSubjectsWithContentsRect:(struct CGRect)arg1 topLevelOnly:(_Bool)arg2;	// IMP=0x0000000000014437
- (id)normalizedPathForSubjectAtIndex:(id)arg1 contentsRect:(struct CGRect)arg2 topLevelOnly:(_Bool)arg3;	// IMP=0x00000000000142ce
- (id)normalizedPathForSubjectWithIndexSet:(id)arg1 contentsRect:(struct CGRect)arg2 topLevelOnly:(_Bool)arg3;	// IMP=0x0000000000013feb
- (id)convertExternalIndexSetToInternal:(id)arg1;	// IMP=0x0000000000013ece
- (id)convertIndexSetToConcreteSubjectIndexes:(id)arg1;	// IMP=0x0000000000013e4c
- (void)processPathForInstance:(id)arg1;	// IMP=0x00000000000136fb
- (void)prepareInstanceImagesWithCIContext:(id)arg1 instance:(id)arg2 image:(struct CGImage *)arg3;	// IMP=0x0000000000013549
- (void)preparePathsAndImageMaskIfNecessaryWithContext:(id)arg1;	// IMP=0x00000000000131a3
@property(readonly, nonatomic) NSIndexSet *allSubjectIndexes;
- (id)madSubjectIndexesForVKSubjectIndexes:(id)arg1;	// IMP=0x0000000000012fe6
@property(readonly, nonatomic) struct CGRect normalizedCropRect;
@property(readonly, nonatomic) VKCRemoveBackgroundRequest *request;
@property(readonly, nonatomic) long long imageOrientation;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(readonly, nonatomic) _Bool allSubjectsSelected;
@property(readonly, nonatomic) NSNumber *animatedStickerScore;
- (id)initWithMaskResult:(id)arg1;	// IMP=0x0000000000012c59

@end

