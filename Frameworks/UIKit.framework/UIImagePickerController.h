/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSArray, <UINavigationControllerDelegate><UIImagePickerControllerDelegate>, NSMutableDictionary;

@interface UIImagePickerController : UINavigationController <NSCoding> {
    unsigned int _sourceType;
    id _image;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    NSArray *_mediaTypes;
    NSMutableDictionary *_properties;
    int _previousStatusBarMode;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int savingOptions : 3; 
        unsigned int didRevertStatusBar : 1; 
    } _imagePickerFlags;
}

@property unsigned int sourceType;
@property(copy) NSArray * mediaTypes;
@property BOOL allowsEditing;
@property BOOL allowsImageEditing;
@property double videoMaximumDuration;
@property unsigned int videoQuality;
@property BOOL showsCameraControls;
@property(retain) UIView * cameraOverlayView;
@property struct CGAffineTransform { float a; float b; float c; float d; float tx; float ty; } cameraViewTransform;
@property unsigned int cameraCaptureMode;
@property unsigned int cameraDevice;
@property int cameraFlashMode;
@property <UINavigationControllerDelegate><UIImagePickerControllerDelegate> * delegate;

+ (BOOL)isSourceTypeAvailable:(unsigned int)arg1;
+ (BOOL)_isMediaTypeAvailable:(id)arg1 forSource:(unsigned int)arg2;
+ (BOOL)_reviewCapturedItems;
+ (id)availableMediaTypesForSourceType:(unsigned int)arg1;
+ (BOOL)isCameraDeviceAvailable:(unsigned int)arg1;
+ (id)availableCaptureModesForCameraDevice:(unsigned int)arg1;
+ (BOOL)isFlashAvailableForCameraDevice:(unsigned int)arg1;
+ (void)_initializeSafeCategory;

- (void)setParentViewController:(id)arg1;
- (id)_createInitialController;
- (double)videoMaximumDuration;
- (void)setVideoQuality:(unsigned int)arg1;
- (void)_setProperties:(id)arg1;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)cameraOverlayView;
- (BOOL)allowsImageEditing;
- (unsigned int)sourceType;
- (id)_initWithSourceImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_updateCameraCaptureMode;
- (void)setSourceType:(unsigned int)arg1;
- (void)setMediaTypes:(id)arg1;
- (id)mediaTypes;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (BOOL)allowsEditing;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setVideoMaximumDuration:(double)arg1;
- (unsigned int)videoQuality;
- (void)_setAllowsImageEditing:(BOOL)arg1;
- (BOOL)_allowsImageEditing;
- (void)_initializeProperties;
- (id)_valueForProperty:(id)arg1;
- (void)_setImagePickerSavingOptions:(unsigned int)arg1;
- (unsigned int)_imagePickerSavingOptions;
- (BOOL)_sourceTypeIsCamera;
- (id)_cameraViewController;
- (BOOL)showsCameraControls;
- (void)setShowsCameraControls:(BOOL)arg1;
- (void)setCameraOverlayView:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })cameraViewTransform;
- (void)setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)takePicture;
- (BOOL)startVideoCapture;
- (void)stopVideoCapture;
- (unsigned int)cameraDevice;
- (void)setCameraDevice:(unsigned int)arg1;
- (unsigned int)cameraCaptureMode;
- (BOOL)_isCameraCaptureModeValid:(unsigned int)arg1;
- (void)setCameraCaptureMode:(unsigned int)arg1;
- (int)cameraFlashMode;
- (void)setCameraFlashMode:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)_didRevertStatusBar;
- (void)_removeAllChildren;
- (void)_setupControllersForCurrentSourceType;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_autoDismiss;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(id)arg1;
- (id)_properties;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (struct CGSize { float x1; float x2; })_adjustedContentSizeForPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (BOOL)ckCanDismissWhenSuspending;

@end