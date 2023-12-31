//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSListController.h>

@class HKHealthStore, NSArray, NSCalendar, NSSet, NSString, _HKMedicalIDData;
@protocol COSSOSSettingsViewControllerDelegate;

@interface COSSOSSettingsViewController : BPSListController
{
    _Bool _deviceSupportsMedicalContacts;	// 192 = 0xc0
    _Bool _useMedicalEmergencyContacts;	// 193 = 0xc1
    _Bool _haveSetUseMedicalEmergencyContacts;	// 194 = 0xc2
    _Bool _needsReloadSpecifiers;	// 195 = 0xc3
    _Bool _wristDetectionEnabled;	// 196 = 0xc4
    _Bool _isTinker;	// 197 = 0xc5
    id <COSSOSSettingsViewControllerDelegate> _navBarDelegate;	// 200 = 0xc8
    HKHealthStore *_healthStore;	// 208 = 0xd0
    _HKMedicalIDData *_medicalIDData;	// 216 = 0xd8
    NSCalendar *_calendar;	// 224 = 0xe0
    NSSet *_tccAppIDs;	// 232 = 0xe8
    NSArray *_kappaAPISpecifiers;	// 240 = 0xf0
    NSString *_kappaApiAppName;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00200000000f70ae
@property(retain, nonatomic) NSString *kappaApiAppName; // @synthesize kappaApiAppName=_kappaApiAppName;
@property(retain, nonatomic) NSArray *kappaAPISpecifiers; // @synthesize kappaAPISpecifiers=_kappaAPISpecifiers;
@property(retain, nonatomic) NSSet *tccAppIDs; // @synthesize tccAppIDs=_tccAppIDs;
@property(readonly, nonatomic) _Bool isTinker; // @synthesize isTinker=_isTinker;
@property(nonatomic) _Bool wristDetectionEnabled; // @synthesize wristDetectionEnabled=_wristDetectionEnabled;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) _HKMedicalIDData *medicalIDData; // @synthesize medicalIDData=_medicalIDData;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak id <COSSOSSettingsViewControllerDelegate> navBarDelegate; // @synthesize navBarDelegate=_navBarDelegate;
- (void)presentConfirmationWithTitle:(id)arg1 message:(id)arg2 cancelTitle:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4 confirmTitle:(id)arg5 confirmHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000f6f81
- (void)medicalIDViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000f6f65
- (void)medicalIDViewControllerDidSave:(id)arg1;	// IMP=0x00100000000f6ee8
- (void)medicalIDViewControllerDidCancel:(id)arg1;	// IMP=0x00100000000f6ecc
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000000f6ec4
- (void)learnMore;	// IMP=0x00100000000f6daf
- (void)_editMedicalID;	// IMP=0x00100000000f6a9d
- (id)longPressTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f6a95
- (id)newtonTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f6a8d
- (void)setNewtonTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f6a87
- (void)setLongPressTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f6a81
- (id)getContactDestination:(id)arg1;	// IMP=0x00100000000f6a79
@property(readonly, nonatomic) _Bool canEditMedicalIDContacts;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000f69d3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000f692d
- (struct _NSRange)rangeOfReplacementString:(id)arg1 inFormatString:(id)arg2;	// IMP=0x00100000000f68ca
- (void)_addFooterFormat:(id)arg1 footerLink:(id)arg2 toSpecifier:(id)arg3 withAction:(id)arg4;	// IMP=0x00100000000f66ee
- (void)_didSelectFallDetectionDataSharing:(id)arg1;	// IMP=0x00100000000f667f
- (id)_descriptionOfNumberOfFallDetectionApps:(id)arg1;	// IMP=0x00100000000f6598
- (id)_createNewtonSpecifiers;	// IMP=0x00100000000f657f
- (id)specifiers;	// IMP=0x00100000000f62f2
- (void)addSOSContactsToSpecifiers:(id)arg1;	// IMP=0x00100000000f62ec
- (void)addEmergencyContactsToSpecifiers:(id)arg1;	// IMP=0x00100000000f62e6
- (id)kappaTriggersEmergencySOS:(id)arg1;	// IMP=0x00100000000f62de
- (void)setKappaTriggersEmergencySOS:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x00100000000f62d8
- (id)kappaThirdPartyName:(id)arg1;	// IMP=0x00100000000f62c3
- (void)_createKappaAPISpecifiers;	// IMP=0x00100000000f62bd
- (id)_createKappaSpecifiers;	// IMP=0x00100000000f62a4
- (_Bool)showKappaInfo;	// IMP=0x00100000000f629c
@property(readonly, nonatomic) _Bool showNewtonInfo;
- (void)_updateSOSContactsList;	// IMP=0x00100000000f609e
- (void)sosContactsChanged:(id)arg1;	// IMP=0x00100000000f6098
- (void)dealloc;	// IMP=0x00100000000f601c
- (id)init;	// IMP=0x00100000000f5f08
- (_Bool)useMedicalEmergencyContacts;	// IMP=0x00100000000f5ee3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

