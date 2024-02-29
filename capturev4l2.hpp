#ifndef CAPTURE_V4L2_HPP_
#define CAPTURE_V4L2_HPP_

/*
* Camera device using Video4Linux2
*/

class CaptureV4L2
{
    public:
        CaptureV4L2();
        void run();

    private:

        // image buffer variable    
        struct Buffer
        {
            unsigned index;
            unsigned char * start;
            size_t length;
        };

        Buffer buffer_;

        int fd_;

        // functions
        int open_camera();
        int print_caps();
        int set_pix_fmt();
        int init_mmap();
        int capture_image();
        int process_buffer(const void *p);
        int save_img();
        int stop_stream();
        void close_camera();

};


#endif //CAPTURE_V4L2_HPP_