//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKAnnotationView, NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _MKAnnotationViewCustomFeatureAnnotation : NSObject
{
    VKCustomFeature *_customFeature;	// 8 = 0x8
    MKAnnotationView *_annotationView;	// 16 = 0x10
    struct {
        double latitude;
        double longitude;
    } _coordinate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f23e5
- (void).cxx_destruct;	// IMP=0x00000000000f28a2
@property(nonatomic) __weak MKAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) VKCustomFeature *feature;
- (void)setCustomFeature:(id)arg1;	// IMP=0x00000000000f2576
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f24a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f23ed

// Remaining properties
@property(nonatomic) double course;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

