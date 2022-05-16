#include <glad/glad.h>

#include "texture.h"

namespace texture {
    unsigned int loadTexture(unsigned int textureUnit,
                             unsigned int textureTarget,
                             int width,
                             int height,
                             unsigned int channelType,
                             unsigned char *data) {
        unsigned int textureId;
        glGenTextures(1, &textureId);
        glActiveTexture(textureUnit);
        glBindTexture(textureTarget, textureId);

        glTexImage2D(textureTarget, 0, GL_RGB, width, height, 0, channelType, GL_UNSIGNED_BYTE, data);
        glGenerateMipmap(textureTarget);

        return textureId;
    }
}
