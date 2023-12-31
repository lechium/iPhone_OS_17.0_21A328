//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableSet;

@interface CRLMultipleImporterHelper : NSObject
{
    NSMutableSet *_importersNeedingToRequestMediaCompatibilityRequirement;	// 8 = 0x8
    NSMapTable *_mediaCompatibilityRequirementReplyBlocksForImporters;	// 16 = 0x10
    NSArray *_importers;	// 24 = 0x18
    long long _mediaTypesRequestingConversion;	// 32 = 0x20
    long long _reasonsForMediaConversion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000286386
@property(readonly, nonatomic) long long reasonsForMediaConversion; // @synthesize reasonsForMediaConversion=_reasonsForMediaConversion;
@property(readonly, nonatomic) long long mediaTypeForConversion; // @synthesize mediaTypeForConversion=_mediaTypesRequestingConversion;
@property(readonly, nonatomic) NSArray *importers; // @synthesize importers=_importers;
- (void)completeImportWithCompatibilityOnAllDevices:(_Bool)arg1 allowHEVCContent:(_Bool)arg2;	// IMP=0x0010000000285ffc
- (void)mediaCompatibilityCheckHasBeenHandledForImporter:(id)arg1;	// IMP=0x0010000000285ded
- (void)importer:(id)arg1 needsMediaCompatibilityFeedbackWithReasons:(long long)arg2 forMediaType:(long long)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000285cf1
@property(readonly, nonatomic) unsigned long long numberOfImportersRequiringCompatibilityConversion;
@property(readonly, nonatomic) _Bool allImportersHaveGivenCompatibilityResponse;
- (id)initWithImporters:(id)arg1;	// IMP=0x0010000000285c14

@end

