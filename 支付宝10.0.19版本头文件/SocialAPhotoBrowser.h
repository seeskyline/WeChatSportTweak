//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BEEPhotoBrowserDelegate.h"

@class BEEPhoto, CCard, CPopMenuHelper, NSArray, NSString, UIViewController, UIWindow;

@interface SocialAPhotoBrowser : NSObject <BEEPhotoBrowserDelegate>
{
    UIViewController *_showInVC;
    NSArray *_inputDataList;
    NSArray *_thumbDataList;
    NSString *_userId;
    NSString *_targetId;
    NSString *_loginId;
    NSString *_clientId;
    id <SocialAPhotoBrowserDelegate> _adelegate;
    CCard *_cardData;
    NSString *_subSceneCode;
    BEEPhoto *_photo;
    NSArray *_actionSheetFunctions;
    BEEPhoto *_sharedPhoto;
    NSString *_shareToUserId;
    NSString *_shareToUserType;
    CPopMenuHelper *_menuHelper;
    double _photoBrowserWindowLevel;
    UIWindow *_previewWindow;
    double _windowLevel;
}

@property(nonatomic) double windowLevel; // @synthesize windowLevel=_windowLevel;
@property(retain, nonatomic) UIWindow *previewWindow; // @synthesize previewWindow=_previewWindow;
@property(nonatomic) double photoBrowserWindowLevel; // @synthesize photoBrowserWindowLevel=_photoBrowserWindowLevel;
@property(retain, nonatomic) CPopMenuHelper *menuHelper; // @synthesize menuHelper=_menuHelper;
@property(retain, nonatomic) NSString *shareToUserType; // @synthesize shareToUserType=_shareToUserType;
@property(retain, nonatomic) NSString *shareToUserId; // @synthesize shareToUserId=_shareToUserId;
@property(retain, nonatomic) BEEPhoto *sharedPhoto; // @synthesize sharedPhoto=_sharedPhoto;
@property(retain, nonatomic) NSArray *actionSheetFunctions; // @synthesize actionSheetFunctions=_actionSheetFunctions;
@property(retain, nonatomic) BEEPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) NSString *subSceneCode; // @synthesize subSceneCode=_subSceneCode;
@property(retain, nonatomic) CCard *cardData; // @synthesize cardData=_cardData;
@property(nonatomic) __weak id <SocialAPhotoBrowserDelegate> adelegate; // @synthesize adelegate=_adelegate;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSArray *thumbDataList; // @synthesize thumbDataList=_thumbDataList;
@property(retain, nonatomic) NSArray *inputDataList; // @synthesize inputDataList=_inputDataList;
@property(nonatomic) __weak UIViewController *showInVC; // @synthesize showInVC=_showInVC;
- (void).cxx_destruct;
- (_Bool)enableSupportOrientationChanged:(id)arg1;
- (id)myFavoritesBaseItem:(id)arg1;
- (void)publishWaring:(id)arg1;
- (void)willAppearPhotoBrowser:(id)arg1;
- (void)restore;
- (void)becomeActionMode;
- (void)deleteFeed:(id)arg1;
- (void)collectPhoto:(id)arg1;
- (void)saveFeedDetailImageToGallery:(id)arg1;
- (void)sendPhotoToFriend:(id)arg1;
- (id)mPopMenuHelper;
- (void)shareFeed2Friend:(id)arg1 photo:(id)arg2;
- (id)convertFromImageList:(id)arg1 originFrame:(id)arg2 business:(id)arg3;
- (id)convertFromThumbList:(id)arg1 thumbImgArr:(id)arg2;
- (id)thumbPhoto:(id)arg1 thumbImg:(id)arg2 indexSub:(unsigned long long)arg3;
- (id)convertFromVideoData:(id)arg1 originFrame:(struct CGRect)arg2 business:(id)arg3;
- (void)dealloc;
- (void)didDismissPhotoBrowser:(id)arg1;
- (void)willDismissPhotoBrowser:(id)arg1 isSnapChat:(_Bool)arg2 atIndex:(long long)arg3;
- (struct CGRect)changedOrigFrameInPhotoBrowser:(id)arg1 atIndex:(long long)arg2;
- (_Bool)autoPlayOnlineVideoOnWWLAN:(id)arg1;
- (_Bool)enableMutedForShortVideo:(id)arg1;
- (_Bool)enableShowTapToExitViewForShortVideo:(id)arg1;
- (void)performMenuAction:(SEL)arg1 photoModel:(id)arg2;
- (void)photoBrowser:(id)arg1 doActionAtIndex:(long long)arg2 title:(id)arg3 photoIndex:(long long)arg4;
- (id)photoBrowserActionItemArray:(id)arg1 photoIndex:(unsigned long long)arg2;
- (void)photoBrowser:(id)arg1 singleTapPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 thumbPhotoAtIndex:(unsigned long long)arg2 isVideo:(_Bool *)arg3;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)configPhotoBrowser:(long long)arg1;
- (void)createPhotoBrowserWithStartPhotoIdx:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

