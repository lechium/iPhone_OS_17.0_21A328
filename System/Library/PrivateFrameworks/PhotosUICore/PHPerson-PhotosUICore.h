//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPerson.h>

@class NSDate, NSPersonNameComponents, NSString, NSURL;

@interface PHPerson (PhotosUICore)
+ (id)px_localizedNameFromContact:(id)arg1;	// IMP=0x00100000003e07c9
+ (void)px_loadRepresentativeFacesForPersons:(id)arg1;	// IMP=0x00100000005637a2
- (_Bool)px_isSameDetectionTypeAsPerson:(id)arg1;	// IMP=0x00100000003e075d
@property(readonly, nonatomic) NSURL *px_navigationURL;
@property(readonly, nonatomic) NSPersonNameComponents *px_nameComponents;
- (id)_px_localizedNameWithStyle:(long long)arg1;	// IMP=0x00100000003e0570
@property(readonly) NSString *px_longStyleLocalizedName;
@property(readonly) NSString *px_localizedName;
@property(readonly) _Bool px_isPet;
@property(readonly) _Bool px_isHuman;
@property(readonly) NSDate *px_keyPhotoDate;
@property(readonly) _Bool isPersonModel;
@property(readonly) NSString *px_localIdentifier;
@property(readonly) unsigned long long numberOfAssets;
- (int)requestFaceCropImageWithTargetSize:(struct CGSize)arg1 displayScale:(double)arg2 cropFactor:(long long)arg3 style:(long long)arg4 cacheResult:(_Bool)arg5 synchronous:(_Bool)arg6 resultHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000056326e
- (void)requestFaceTileImageWithTargetSize:(struct CGSize)arg1 cropFactor:(unsigned long long)arg2 style:(unsigned long long)arg3 cacheResult:(_Bool)arg4 boundFaceRect:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00100000005631bd
@property(readonly, nonatomic) _Bool px_isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) short detectionType;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isVerified;
@property(readonly, nonatomic) NSString *name;
@property(readonly) Class superclass;
@end
