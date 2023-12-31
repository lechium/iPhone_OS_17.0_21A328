//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFace.h>

@class NSData, NSString;

@interface PHFace (PNFaceProtocol)
@property(nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
- (double)photosFaceRepresentationQuality;	// IMP=0x002000000015104a
- (double)photosFaceRepresentationRoll;	// IMP=0x0020000000151038
- (id)photosFaceRepresentationLocalIdentifier;	// IMP=0x0020000000151026
- (long long)photosFaceRepresentationClusterSequenceNumber;	// IMP=0x0020000000151014
- (long long)photosFaceRepresentationQualityMeasure;	// IMP=0x0020000000151002
- (_Bool)photosFaceRepresentationIsRightEyeClosed;	// IMP=0x0020000000150ff0
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;	// IMP=0x0020000000150fde
- (_Bool)photosFaceRepresentationHasSmile;	// IMP=0x0020000000150fcc
- (double)photosFaceRepresentationBlurScore;	// IMP=0x0020000000150fba
- (double)photosFaceRepresentationSize;	// IMP=0x0020000000150fa8
- (double)photosFaceRepresentationCenterY;	// IMP=0x0020000000150f96
- (double)photosFaceRepresentationCenterX;	// IMP=0x0020000000150f84
- (long long)photosFaceRepresentationSourceHeight;	// IMP=0x0020000000150f72
- (long long)photosFaceRepresentationSourceWidth;	// IMP=0x0020000000150f60
- (struct CGRect)vcp_normalizedBodyBounds;	// IMP=0x002000000027a5a3
- (_Bool)vcp_hasBody;	// IMP=0x002000000027a51e
- (struct CGRect)vcp_normalizedFaceBounds;	// IMP=0x002000000027a3ce
- (_Bool)vcp_hasFace;	// IMP=0x002000000027a362

// Remaining properties
@property(readonly, nonatomic) unsigned short ageType;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) unsigned short poseType;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double size;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long vuObservationID;
@end

