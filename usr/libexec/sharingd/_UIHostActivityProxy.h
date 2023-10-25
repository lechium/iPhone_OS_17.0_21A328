//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, NSUUID, SFProxyText, UIActivity;

@interface _UIHostActivityProxy : NSObject
{
    _Atomic unsigned int _iconImageSlotID;	// 8 = 0x8
    _Atomic unsigned int _labelSlotID;	// 12 = 0xc
    _Atomic double _slotTextHeight;	// 16 = 0x10
    _Bool _isFavorite;	// 24 = 0x18
    _Bool _isDisabled;	// 25 = 0x19
    _Bool _isUserDefaultsActivity;	// 26 = 0x1a
    _Bool _isRestricted;	// 27 = 0x1b
    UIActivity *_activity;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    NSUUID *_activityIdentifierShare;	// 48 = 0x30
    NSUUID *_activityIdentifierOpen;	// 56 = 0x38
    NSUUID *_activityIdentifierCopy;	// 64 = 0x40
    SFProxyText *_activityTitle;	// 72 = 0x48
    NSAttributedString *_activityFooter;	// 80 = 0x50
    NSString *_applicationBundleIdentifier;	// 88 = 0x58
    CDUnknownBlockType _loadHandler;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001004a
- (void).cxx_destruct;	// IMP=0x00200000000112a2
@property(copy, nonatomic) CDUnknownBlockType loadHandler; // @synthesize loadHandler=_loadHandler;
@property(nonatomic) _Bool isRestricted; // @synthesize isRestricted=_isRestricted;
@property(nonatomic) _Bool isUserDefaultsActivity; // @synthesize isUserDefaultsActivity=_isUserDefaultsActivity;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSAttributedString *activityFooter; // @synthesize activityFooter=_activityFooter;
@property(retain, nonatomic) SFProxyText *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(retain, nonatomic) NSUUID *activityIdentifierCopy; // @synthesize activityIdentifierCopy=_activityIdentifierCopy;
@property(retain, nonatomic) NSUUID *activityIdentifierOpen; // @synthesize activityIdentifierOpen=_activityIdentifierOpen;
@property(retain, nonatomic) NSUUID *activityIdentifierShare; // @synthesize activityIdentifierShare=_activityIdentifierShare;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIActivity *activity; // @synthesize activity=_activity;
- (unsigned int)imageSlotID;	// IMP=0x001000000001117d
- (_Bool)load;	// IMP=0x0010000000011122
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000010944
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (double)slotTextHeight;	// IMP=0x00100000000106f8
- (void)setSlotTextHeight:(double)arg1;	// IMP=0x00100000000106e9
- (unsigned int)labelSlotID;	// IMP=0x00100000000106e0
- (void)setLabelSlotID:(unsigned int)arg1;	// IMP=0x00100000000106d7
@property(readonly, nonatomic) unsigned int iconImageSlotID;
- (void)setIconImageSlotID:(unsigned int)arg1;	// IMP=0x00100000000106c5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000010533
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000100e3
- (id)initWithActivity:(id)arg1;	// IMP=0x0010000000010052

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
