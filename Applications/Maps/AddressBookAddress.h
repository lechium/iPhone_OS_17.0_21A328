//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNLabeledValue, MISSING_TYPE, MKMapItem, MapsLocationOfInterest, NSDictionary, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AddressBookAddress
{
    CNLabeledValue *_address;	// 40 = 0x28
    NSString *_shortAddress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_addressResolutionQueue;	// 56 = 0x38
    double _timestamp;	// 64 = 0x40
    CNContact *_contact;	// 72 = 0x48
    NSString *_contactIdentifier;	// 80 = 0x50
    NSString *_addressIdentifier;	// 88 = 0x58
    CNLabeledValue *_addressValue;	// 96 = 0x60
    MKMapItem *_geocodedMapItem;	// 104 = 0x68
    NSError *_geocodingError;	// 112 = 0x70
    MapsLocationOfInterest *_locationOfInterest;	// 120 = 0x78
    MKMapItem *_generatedMapItemCache;	// 128 = 0x80
}

+ (void)didReceiveMemoryWarning;	// IMP=0x00200000003dbb09
+ (id)_completionQueue;	// IMP=0x00100000003dbab4
+ (id)_completionsByAddress;	// IMP=0x00100000003dba4f
+ (id)_geocodedMapItemsByAddress;	// IMP=0x00100000003db9ea
+ (id)singleAddressForContact:(id)arg1;	// IMP=0x00100000003d9966
+ (void)initialize;	// IMP=0x00100000003d97c8
- (void).cxx_destruct;	// IMP=0x00200000003dc9e5
@property(retain, nonatomic) MKMapItem *generatedMapItemCache; // @synthesize generatedMapItemCache=_generatedMapItemCache;
@property(retain, nonatomic) MapsLocationOfInterest *locationOfInterest; // @synthesize locationOfInterest=_locationOfInterest;
@property(readonly, nonatomic) NSError *geocodingError; // @synthesize geocodingError=_geocodingError;
@property(retain, nonatomic) MKMapItem *geocodedMapItem; // @synthesize geocodedMapItem=_geocodedMapItem;
@property(retain, nonatomic) CNLabeledValue *addressValue; // @synthesize addressValue=_addressValue;
@property(readonly, nonatomic) NSString *addressIdentifier; // @synthesize addressIdentifier=_addressIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)forwardGeocodeAddress:(CDUnknownBlockType)arg1;	// IMP=0x00100000003dbb46
- (id)thumbnailIconWithScale:(double)arg1 size:(unsigned long long)arg2;	// IMP=0x00100000003db8f9
- (void)_updateMapItemClientAttributes;	// IMP=0x00100000003db6e8
- (id)compositeNameMatchesForSearchString:(id)arg1;	// IMP=0x00100000003db66e
@property(readonly, nonatomic) _Bool hasStreetAddress;
@property(readonly, nonatomic) _Bool isValid;
@property(readonly, copy, nonatomic) NSDictionary *addressDictionary;
@property(readonly, nonatomic) _Bool isHomeWorkSchoolAddress;
@property(readonly, nonatomic) _Bool isMeCard;
@property(readonly, nonatomic) int addressType;
@property(readonly, copy, nonatomic) NSString *spokenNameForNavigation;
@property(readonly, copy, nonatomic) NSString *phoneticName;
@property(readonly, copy, nonatomic) NSString *waypointCompositeName;
@property(readonly, copy, nonatomic) NSString *compositeName;
@property(readonly, copy, nonatomic) NSString *singleLineAddress;
@property(readonly, copy, nonatomic) NSString *shortAddress;
@property(readonly, nonatomic) MKMapItem *generatedMapItem;
@property(readonly, nonatomic) NSString *localizedLabel;
@property(readonly) unsigned long long hash;
- (void)_handleResolvedAddress:(id)arg1 geocodedMapItem:(id)arg2;	// IMP=0x00100000003daabe
- (void)_resolveContactIdentifier:(id)arg1 addressIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000003da774
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *addressResolutionQueue; // @synthesize addressResolutionQueue=_addressResolutionQueue;
- (void)storeUpdated:(id)arg1;	// IMP=0x00100000003da398
- (void)dealloc;	// IMP=0x00100000003da299
- (id)initWithCNContactIdentifier:(id)arg1 addressIdentifier:(id)arg2;	// IMP=0x00100000003d9f27
- (id)initWithRecordID:(int)arg1 addressID:(int)arg2;	// IMP=0x00100000003d9c47
- (id)init;	// IMP=0x00100000003d9b61
- (id)initWithContact:(id)arg1 addressValue:(id)arg2;	// IMP=0x00100000003d9a0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000003d985f
- (void)updateModel:(id)arg1;	// IMP=0x001000000047e4a5
- (MISSING_TYPE *)_carMeCardTitle;	// IMP=0x001000000047e2f2
- (id)entryWithTicket:(id)arg1;	// IMP=0x0010000000977be7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

